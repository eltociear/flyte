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

from flyteadmin.models.core_boolean_expression import CoreBooleanExpression  # noqa: F401,E501
from flyteadmin.models.core_node import CoreNode  # noqa: F401,E501


class CoreIfBlock(object):
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
        'condition': 'CoreBooleanExpression',
        'then_node': 'CoreNode'
    }

    attribute_map = {
        'condition': 'condition',
        'then_node': 'then_node'
    }

    def __init__(self, condition=None, then_node=None):  # noqa: E501
        """CoreIfBlock - a model defined in Swagger"""  # noqa: E501

        self._condition = None
        self._then_node = None
        self.discriminator = None

        if condition is not None:
            self.condition = condition
        if then_node is not None:
            self.then_node = then_node

    @property
    def condition(self):
        """Gets the condition of this CoreIfBlock.  # noqa: E501


        :return: The condition of this CoreIfBlock.  # noqa: E501
        :rtype: CoreBooleanExpression
        """
        return self._condition

    @condition.setter
    def condition(self, condition):
        """Sets the condition of this CoreIfBlock.


        :param condition: The condition of this CoreIfBlock.  # noqa: E501
        :type: CoreBooleanExpression
        """

        self._condition = condition

    @property
    def then_node(self):
        """Gets the then_node of this CoreIfBlock.  # noqa: E501


        :return: The then_node of this CoreIfBlock.  # noqa: E501
        :rtype: CoreNode
        """
        return self._then_node

    @then_node.setter
    def then_node(self, then_node):
        """Sets the then_node of this CoreIfBlock.


        :param then_node: The then_node of this CoreIfBlock.  # noqa: E501
        :type: CoreNode
        """

        self._then_node = then_node

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
        if issubclass(CoreIfBlock, dict):
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
        if not isinstance(other, CoreIfBlock):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
