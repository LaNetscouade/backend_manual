# Backend Manual

* [Introduction](https://github.com/LaNetscouade/backend_manual/blob/master/README.md#introduction)
* [Features](https://github.com/LaNetscouade/backend_manual/blob/master/README.md#features)
* [Installation and configuration](https://github.com/LaNetscouade/backend_manual/blob/master/README.md#installation-and-configuration)
* [Contributing](https://github.com/LaNetscouade/backend_manual/blob/master/README.md#contributing)
* [Credits / contact](https://github.com/LaNetscouade/backend_manual/blob/master/README.md#credits--contact)

## INTRODUCTION

The Backend Manual module allows to create a simple manual for your website's back-end.

The main idea is to centralize the back-end documentation in the application.

You can simply create documentation pages and they will be available for the back-end's users through a summary.

## FEATURES

* Summary list as home page
* Navigation through the pages
* 3 action buttons
  * Edit the content (as a role)
  * Print the content
  * Go the the specific page
* Differents styles available, see the [demo](http://cpelletier.github.io/backend_manual)

<img src="https://dl.dropboxusercontent.com/u/21760427/Backend-manual/Backend_manual%203.png">

***

<img src="https://dl.dropboxusercontent.com/u/21760427/Backend-manual/Backend_manual%202.png">


## INSTALLATION AND CONFIGURATION

- Installation:
Download the module and copy it into your contributed modules folder:
(i.e. /sites/all/modules/contrib) and enable it from the modules administration/management page.
More information at: [Installing contributed modules (Drupal 7)](http://drupal.org/documentation/install/modules-themes/modules-7).
This module depends on many other modules:
    - features
    - ctools
    - context
    - strongarm

- Configuration:
    - After successful installation, browse to the Backend Manual configuration page (i.e. /admin/config/backend_manual/config). You can configure the text which will apear on the top of the summary page.
    - Select who can have read access to the Backend Manual on the role page (i.e. /admin/people/permissions/roles > "Access to backend manual") and select Webmaster for example.

## Usage

**Step 1 : set the main titles of your summary**

Create taxonomies in the "Backend Manual Category" (i.e /admin/structure/taxonomy/backend_manual_category). Those taxonomies will serve as the main titles of your summary.

**Step 2 : create your "Manual Page" content**

Click on add a "Manual Page" (i.e node/add/manual-page)  content then go to the category  field  to relate it to one of the Backend Manual categories your created in the step 1.

There are few fields to fill in in the Manual creation page. Title, Subtitle, Body, Category, and a Linked page field that will allow you to relate your page to a link. Filling this field will automatically add a blue button in the floating menu on the right side of the page.

We recommand the use of the Full HTML format.

## CONTRIBUTING

If you want to contribute, submit a pull request at [https://github.com/LaNetscouade/backend_manual](https://github.com/LaNetscouade/backend_manual).

If you need to edit assets:

    cd backend_manual_gulp
    npm install
    bower install

Then use the command ```gulp drupal-build```, it will generate assets on the parent directory.


## CREDITS / CONTACT

Current Maintainers:
- Andry Rahaniraka - [@Botambaoaks](https://twitter.com/botambaoaks)
- Charles Pelletier - [@Charles_plt](https://twitter.com/charles_plt)
- Thibault Pierre - [@T1l3](https://twitter.com/t1l3)

Build with [Materialize](http://materializecss.com/)

This module is sponsored by:
[La Netscouade](http://www.lanetscouade.com)

[GNU GENERAL PUBLIC LICENSE](LICENSE.txt)
