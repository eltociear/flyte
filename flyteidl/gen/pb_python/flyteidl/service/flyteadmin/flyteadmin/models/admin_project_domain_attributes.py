# coding: utf-8

"""
    flyteidl/service/admin.proto

    No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)  # noqa: E501

    OpenAPI spec version: version not set
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six

from flyteadmin.models.admin_matching_attributes import AdminMatchingAttributes  # noqa: F401,E501


class AdminProjectDomainAttributes(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'project': 'str',
        'domain': 'str',
        'matching_attributes': 'AdminMatchingAttributes'
    }

    attribute_map = {
        'project': 'project',
        'domain': 'domain',
        'matching_attributes': 'matching_attributes'
    }

    def __init__(self, project=None, domain=None, matching_attributes=None):  # noqa: E501
        """AdminProjectDomainAttributes - a model defined in Swagger"""  # noqa: E501

        self._project = None
        self._domain = None
        self._matching_attributes = None
        self.discriminator = None

        if project is not None:
            self.project = project
        if domain is not None:
            self.domain = domain
        if matching_attributes is not None:
            self.matching_attributes = matching_attributes

    @property
    def project(self):
        """Gets the project of this AdminProjectDomainAttributes.  # noqa: E501

        Unique project id for which this set of attributes will be applied.  # noqa: E501

        :return: The project of this AdminProjectDomainAttributes.  # noqa: E501
        :rtype: str
        """
        return self._project

    @project.setter
    def project(self, project):
        """Sets the project of this AdminProjectDomainAttributes.

        Unique project id for which this set of attributes will be applied.  # noqa: E501

        :param project: The project of this AdminProjectDomainAttributes.  # noqa: E501
        :type: str
        """

        self._project = project

    @property
    def domain(self):
        """Gets the domain of this AdminProjectDomainAttributes.  # noqa: E501

        Unique domain id for which this set of attributes will be applied.  # noqa: E501

        :return: The domain of this AdminProjectDomainAttributes.  # noqa: E501
        :rtype: str
        """
        return self._domain

    @domain.setter
    def domain(self, domain):
        """Sets the domain of this AdminProjectDomainAttributes.

        Unique domain id for which this set of attributes will be applied.  # noqa: E501

        :param domain: The domain of this AdminProjectDomainAttributes.  # noqa: E501
        :type: str
        """

        self._domain = domain

    @property
    def matching_attributes(self):
        """Gets the matching_attributes of this AdminProjectDomainAttributes.  # noqa: E501


        :return: The matching_attributes of this AdminProjectDomainAttributes.  # noqa: E501
        :rtype: AdminMatchingAttributes
        """
        return self._matching_attributes

    @matching_attributes.setter
    def matching_attributes(self, matching_attributes):
        """Sets the matching_attributes of this AdminProjectDomainAttributes.


        :param matching_attributes: The matching_attributes of this AdminProjectDomainAttributes.  # noqa: E501
        :type: AdminMatchingAttributes
        """

        self._matching_attributes = matching_attributes

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(AdminProjectDomainAttributes, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, AdminProjectDomainAttributes):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
