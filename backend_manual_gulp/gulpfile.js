// Load plugins
var gulp = require('gulp');
var	$ = require('gulp-load-plugins')();

// Styles
gulp.task('styles', function() {
	return gulp.src('sass/main.scss')
    .pipe($.sass({
      outputStyle: 'nested', // libsass doesn't support expanded yet
      precision: 10,
      onError: console.error.bind(console, 'Sass error:')
    }))
    .pipe($.autoprefixer('last 2 version'))
    // .pipe($.minifyCss())
    .pipe(gulp.dest('../css'))
});

// Scripts
gulp.task('scripts', function() {
  return gulp.src('scripts/main.js')
    .pipe($.uglify())
    .pipe(gulp.dest('../js'))
});

gulp.task('bower', function() {
	return gulp.src([
		'bower_components/jquery/dist/jquery.js',
    'bower_components/materialize/bin/materialize.js'
  ])
  .pipe($.concat('vendor.js'))
  .pipe($.uglify())
  .pipe(gulp.dest('../js'))
});

// Fonts
gulp.task('fonts', function() {
  return gulp.src('font/**/*')
   .pipe(gulp.dest('../font'))
});

// Default task
gulp.task('drupal-build', function() {
    gulp.start('styles', 'scripts', 'bower', 'fonts');
});
