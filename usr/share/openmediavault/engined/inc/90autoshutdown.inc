<?php
/**
 * @license   http://www.gnu.org/licenses/gpl.html GPL Version 3
 * @copyright Copyright (c) 2013-2025 openmediavault plugin developers
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
 require_once("openmediavault/functions.inc");

\OMV\System\LogFileSpec::registerSpecification("autoshutdown", [
    "filename" => "autoshutdown.log",
    "filepath" => "/var/log/autoshutdown.log",
    "regex"    => "/^(\d{4}-\d{2}-\d{2}.\d{2}:\d{2}:\d{2}).+?autoshutdown\[\d+\]: (?|(\w+)$|root: (\S+): '(\S+): (.*)'$)/",
    "columns"  => [
        "date"  => [
            "index" => 1,
            "func"  => function($v) { return strpdate($v,"Y-m-d?G:i:s"); }
         ],
        "type"  => 2,
        "function" => 3,
        "message" => 4
     ]
]);
