Job Import
==========

Job Import is a [Drupal](http://drupal.org) module designed to work hand-in-hand with the [Job Posting](http://drupal.org/project/job_posting) module. It doesn't replace or extend any part of this module per se, but it does add the ability to insert job records into the database of available jobs in an autonomous fashion (i.e. using Cron or some other form of scheduled task).

Features
--------

* Imports from a file directly into the jobs database, including creation of nodes and other periphial records.
* Updates records if they already exist, and deletes old ones. And, of course, creates new records if necessary.
* Supports emailing error reports with details of exceptions - including database and file problems.
* Easily extendable to suit your needs.

Disclaimer
----------

This is one part of the very little useful PHP I have written - I normally develop in [Ruby](http://ruby-lang.org). Because of this, I wouldn't be at all surprised if there are parts of this code that are abolutely horrible/downright wrong. If you are a more experienced developer than me, and these parts disgust you, please either fork and pull request back to me, or [lodge an issue](https://github.com/joshmcarthur/drupal_job_import/issues).

Installation
------------

1. Easy way for people who just want to use it: [Download the tarball](https://github.com/joshmcarthur/drupal_job_import/tarball/master), extract and rename folder to job_import (it goes in your site's `modules` folder).
2. Harder way for people who want to contribute: Fork and/or Clone the repository: `git clone https://github.com/joshmcarthur/drupal_job_import.git job_import`

Usage
-----

**The most important step (and really the only one)**, is to set the constants in the job_constants.inc file - there are only three to set - the location of the something-delimited file, an email address to send error messages to, and the character(s) to use to delimit on.

Everything else is done for you, including the integration with Cron (Providing your existing Drupal installation has got Cron up-and-running).

Acknowledgements
----------------

Many thanks to [Neal Andrews and Associates](http://www.recruit.co.nz), the client for which this module was constructed.

Also thanks to the members of the INFO320 team of Victoria University: Annabel Donnelly, Joel Edwards, and Dan Gaskin, who helped out with the testing and implementation of my module.


