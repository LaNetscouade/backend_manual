// bundle.config.js
var sass = require('gulp-sass');
var lazypipe = require('lazypipe');
var gif = require('gulp-if');
var rename = require("gulp-rename");
var dest = require('gulp-dest');

function stringEndsWith(str, suffix) {
  return str.indexOf(suffix, str.length - suffix.length) !== -1;
}

function isScssFile(file) {
  return stringEndsWith(file.relative, 'scss');
}



var styleTransforms = lazypipe()
    .pipe(function() {
      return gif(isScssFile, sass(), dest('css'));
    })


module.exports = {
  bundle: {
    main: {
      scripts: [
        './assets/**/*.js'
      ],
      styles: [
        './assets/sass/*.scss'
      ],
      options: {
        minCSS: true,
        minJS: true,
        rev: false,
        sourcemaps: false,
        transforms: {
          styles: styleTransforms
        }
      }
    },
    vendor: {
      scripts: [
       './bower_components/jquery/dist/jquery.js',
       './bower_components/materialize/bin/materialize.js'
      ],
      options: {
        rev: false,
        sourcemaps: false
      }
    }
  },
  copy: [
    {
      src: [
        './assets/fonts/**/*.*',
      ],
      base: './assets'
    }
  ]
};